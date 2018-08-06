
g++ -E hellolib.cpp hellolib.i

g++ -S hellolib.i -o hellolib.s

g++ -c hellolib.s -o hellolib.o

#-shard
#g++ -c hellolib.s -shared -o hellolib.dll -Wl,--out-implib,hellolib.lib
g++ -c hellolib.s -shared -o hellolib.dll


