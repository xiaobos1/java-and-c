package com.xiaobo.lian;

import java.util.Arrays;

public class Test007 {
    public static void main(String[] args) {
        String[] arr={"aa","aaa","aaaa"};

        Arrays.sort(arr,(s1,s2)-> {
            return (s1.length() - s2.length());
        });
        System.out.println(Arrays.toString(arr));
    }
}
