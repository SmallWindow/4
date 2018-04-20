#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_tq_myapplication4_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++11111111";
    return env->NewStringUTF(hello.c_str());
}
