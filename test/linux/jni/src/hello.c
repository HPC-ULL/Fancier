#include <jni.h>
#include <stdio.h>
//#include "../include/thirdparty/fancier.h"
#include <fancier.h>
#include <fancier/color.h>
#define POSTERIZE_COLOR4 fcRGBAColor_CYAN


JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_linuxtest_Main_print(JNIEnv *env, jobject obj)
{

    printf("Hello World! tatata :P\n");
    printf("Fancier incluido! ds\n");
    fcByte4 h = POSTERIZE_COLOR4;

    return;
}
