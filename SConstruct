import os
import os.path

INC = os.path.join(os.getenv('HOME'), 'local-install', 'include')
LIB = os.path.join(os.getenv('HOME'), 'local-install', 'lib')

env = Environment(CPPPATH=[INC], LIBPATH=[LIB, '#'], CCFLAGS=Split('-O3'))

env.Library('Gen', env.Split('''
        gen-cpp/Benchmark.cpp
        gen-cpp/benchmark_constants.cpp
        gen-cpp/benchmark_types.cpp
'''))

env.Program('ThriftClient', env.Split('CppClient.cpp'), LIBS=['thrift', 'Gen'])
env.Program('ThriftServer', env.Split('CppServer.cpp'), LIBS=['thrift', 'Gen'])

#env.Program('benchmark_data_size', env.Split('benchmark_data_size.cpp'), LIBS=['thrift', 'Gen'])
