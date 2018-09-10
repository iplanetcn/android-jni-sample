//
// Created by John Lee on 2018/9/6.
//

#include <jni.h>

extern "C"
JNIEXPORT jfloat JNICALL
Java_com_phenix_jnilib_JniCalculator_addTwo(JNIEnv *env, jobject instance, jfloat first,
                                            jfloat second);