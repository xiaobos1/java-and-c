package com.listDemo;

import java.util.HashSet;
import java.util.Set;

public class Stedemo1 {
    public static void main(String[] args) {
        //创建Set集合
        Set<String> s=new HashSet<>();

        //添加元素
        s.add("abc");
        s.add("def");
        s.add("ghi");

        //增强for
//        for(String str:s){
//            System.out.println(str);
//        }

        //迭代器遍历
//        Iterator<String> it = s.iterator();
//        while(it.hasNext()){
//            String str=it.next();
//            System.out.println(str);
//        }
        //Lambda表达式
        s.forEach(str-> System.out.println(str));

    }
}
