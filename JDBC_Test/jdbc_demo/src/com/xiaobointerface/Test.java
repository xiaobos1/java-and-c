package com.xiaobointerface;

public class Test {
    public static void main(String[] args) {
        System.out.println(InterFaceTest.MAX_SPEED);
        plane p=new plane();
        p.Fly();
        p.stop();

    }
}
class plane implements InterFaceTest{

    @Override
    public void Fly() {
        System.out.println("加速行驶");
    }

    @Override
    public void stop() {
        System.out.println("驾驶员正在减速");
    }
}