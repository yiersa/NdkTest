//
// Created by taoji on 2017/12/20 0020.
//
#include<stdio.h>
#include<jni.h>
#include<stdlib.h>
#include<jnijava_JniTest.h>
#include <string.h>
JNIEXPORT jstring JNICALL Java_jnijava_JniTest_getPackname(JNIEnv *env, jclass clazz, jobject obj)
{
    jclass native_class = env->GetObjectClass(obj);
    jmethodID mId = env->GetMethodID(native_class,"getPackageName","()Ljava/lang/String;");
    jstring packName = static_cast<jstring>(env->CallObjectMethod(obj,mId));


//    return env->NewStringUTF("你比四环多一环");
    return packName;
}
