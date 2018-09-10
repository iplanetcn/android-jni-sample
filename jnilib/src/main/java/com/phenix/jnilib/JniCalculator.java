package com.phenix.jnilib;

public class JniCalculator {
    static {
        System.loadLibrary("native-calculator");
    }

    public native static float addTwo(float first, float second);
}
