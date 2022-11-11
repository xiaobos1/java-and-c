package com.itxiao.Test001;

import java.io.InputStream;

public class Test001 {
    public static void main(String[] args) {
        MyThread mt1=new MyThread();
        MyThread mt2=new MyThread();

        //调用方法
//        mt1.run();
//        mt2.run();

        mt1.start();
        mt2.start();
    }
}
