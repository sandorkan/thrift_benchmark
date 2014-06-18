// Copyright (c) 2010, Object Computing, Inc.
// All rights reserved.

#ifdef _MSC_VER
# pragma once
#endif
#ifndef MIDDLEWARENEWSBRIEF_BOOST_PROFILER_H
#define MIDDLEWARENEWSBRIEF_BOOST_PROFILER_H

#include <assert.h>

/// enable or disable generation and usage of profiler code.
#define MIDDLEWARENEWSBRIEF_PROFILER_ENABLE

// Note: boost's microsecond_clock was slow enough to skew the results
// Note: boost's microsecond_clock was slow enough to skew the results
// hence the win32 GetTickCount stuff.
#ifdef _WIN32
# ifndef _WINBASE_ // if we didn't #include <windows.h>
// this is the ultimate expansion of the declaration for GetTickCount
// after the macros have been resolved on a 16 bit windows build
// With luck, it won't conflict with the windows declaration in case
// the included occur in the wrong order
typedef unsigned long DWORD;
__declspec(dllimport) DWORD GetTickCount(void);
# endif // _WINBASE_
#endif // _WIN32

#ifdef _WIN32
# define MIDDLEWARENEWSBRIEF_PROFILER_TIME_TYPE DWORD
# define MIDDLEWARENEWSBRIEF_PROFILER_TIME_UNITS "milliseconds"
#else
# include <boost/cstdint.hpp>
# define MIDDLEWARENEWSBRIEF_PROFILER_TIME_TYPE boost::uint32_t
# define MIDDLEWARENEWSBRIEF_PROFILER_TIME_UNITS "microseconds"
#endif
#define MIDDLEWARENEWSBRIEF_PROFILER_GET_TIME MiddlewareNewsBrief::profilerGetTime()
#define MIDDLEWARENEWSBRIEF_PROFILER_DIFF(a, b) (a - b)
#define USEC_PER_SEC 1000000

namespace MiddlewareNewsBrief {

  inline
  MIDDLEWARENEWSBRIEF_PROFILER_TIME_TYPE profilerGetTime()
  {
    // Note: boost's microsecond_clock was slow enough to skew the results
    // hence the win32 GetTickCount stuff.
    // Millisecond resolution on Windows
#ifdef _WIN32
    return ::GetTickCount();
#else
    timeval tv;
    ::gettimeofday(&tv,0);

    boost::uint64_t usec = tv.tv_usec + (tv.tv_sec * USEC_PER_SEC);

    // Takes the lower 4 bytes, which is all we need for our Diffs
    return usec;
#endif
  }

}  // namespace

#endif // MIDDLEWARENEWSBRIEF_BUILDERS_PROFILER_H
