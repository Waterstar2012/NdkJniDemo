//
// Created by Water on 2016/4/17.
//

//// Created by XY on 16/1/4.//
#include "com_example_water_ndkjnidemo_JniUtils.h"
#include <string.h>
/*
* Class:     Java_com_wobiancao_ndkjnidemo_ndk_JniUtils
* Method:    getStringFormC
* Signature: ()Ljava/lang/String;
*/
JNIEXPORT jstring JNICALL Java_com_example_water_ndkjnidemo_JniUtils_getStringFormC
        (JNIEnv *env, jobject obj){
    return (*env)->NewStringUTF(env,"这里是来自c的string");
}
