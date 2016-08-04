#include <jni.h>
#include <android/log.h>
#include <stdlib.h>

#define LOG_TAG "System.out"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)

 void Java_com_daydays_jnitestdemo_NdkJniUtils_getCLanguageString
  (JNIEnv *env, jobject obj) {
     int pid = fork();

     if (pid > 0) {
//         LOGD("pid = %D", pid);
     } else if (pid == 0) {

         while (1) {
             sleep(1);

//             LOGD("pid = %d", pid);
//                 execlp("am", "am", "start", "--user", "0", "-a",
//                        "android.intent.action.VIEW", "-d",
//                        "http://www.baidu.com", (char *) NULL);
//                 int ppid = getppid();
//                 if (ppid == 1) {
//                     execlp("am", "am", "startservice", "--user", "0", "-n",
//                            "com.daydays.jnitestdemo/com.daydays.jnitestdemo.MainActivity",
//                            (char *) NULL);
//                 }

             }

         } else {

     }

//else {
         //Ð¡ÓÚ ´´½¨×Ó½ø³ÌÊ§°Ü
//         LOGD("pid = %D", pid);
//     }
  }



