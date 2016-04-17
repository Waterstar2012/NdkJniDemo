package com.example.water.ndkjnidemo;

/**
 * Created by Water on 2016/4/17.
 */
public class JniUtils {
    static {
        System.loadLibrary("NdkJniDemo");
    }

    public static native String getStringFormC();
}
