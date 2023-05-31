LD_LIBRARY_PATH=../jni/libs:../jni/build \
java -Djava.library.path=\
/usr/java/packages/lib/amd64:\
/usr/lib/x86_64-linux-gnu/jni:\
/lib/x86_64-linux-gnu:\
/usr/lib/x86_64-linux-gnu:\
/usr/lib/jni:\
/usr/local/lib:\
/usr/java/packages/lib/arm:\
/usr/lib/arm-linux-gnueabihf/jni:\
/lib/arm-linux-gnueabihf:\
/usr/lib/arm-linux-gnueabihf:\
/lib:\
/usr/lib:\
../jni/libs:\
../jni/build \
-cp libs/*:build/classes/java/main es.ull.pcg.hpc.fancier.linuxtest.Main $@

