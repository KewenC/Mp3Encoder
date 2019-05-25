//
// Created by KewenC on 2019/5/25.
//
#include "com_kewenc_mp3encoder_Mp3Encoder.h"
//#include <string.h>
#include <android/log.h>
//#include <stdio.h>

#ifndef  LOG_TAG
#define  LOG_TAG    "h264AndroidJNI"

#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

#endif


JNIEXPORT void JNICALL Java_com_kewenc_mp3encoder_Mp3Encoder_encode
        (JNIEnv * env, jobject obj){
    LOGI("encoder encode");
    LOGE("log e");
}

JNIEXPORT jstring JNICALL Java_com_kewenc_mp3encoder_Mp3Encoder_getLog
        (JNIEnv * env, jobject obj){
    return env->NewStringUTF("I am Str from jni libs!");
}



