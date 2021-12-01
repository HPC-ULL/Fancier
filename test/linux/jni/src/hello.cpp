#include <jni.h>
#include <stdio.h>
#include <fancier.h>
#include <fancier/math.h>

extern "C" JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_linuxtest_Main_print(JNIEnv *env, jobject obj)
{

    printf("Hello World! tatata :P\n");
    
    float res = fcMath_max(10.0, 5.0);

    printf("Fancier incluido! res = %f\n", res);
    
//    fcDouble a = 3.0, b = 3.0;
//    fcDouble fc = fcMath_pown(a, b);

//    printf("fcMath_pown -> %s", fc);

    fcFancier_initJNI(env);

    printf("Fancier iniciado");
    

    return;
}
