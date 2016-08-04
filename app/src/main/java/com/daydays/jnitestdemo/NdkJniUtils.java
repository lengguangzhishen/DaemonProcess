package com.daydays.jnitestdemo;

/**
 * Created by OFFICE on 2016/7/12.
 */
public class NdkJniUtils {

    static {
        System.loadLibrary("jnitest");   //defaultConfig.ndk.moduleName
    }
    public native void getCLanguageString();
}
