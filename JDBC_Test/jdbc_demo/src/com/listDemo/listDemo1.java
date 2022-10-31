package com.listDemo;

import java.util.ArrayList;
import java.util.List;

public class listDemo1 {
    public static void main(String[] args) {
        /*
            list的遍历方法
                1.迭代器
                2 列表迭代器
                3 增强for
                4 lambda表达式
                5 普通for循环
         */
        //创建集合
        List<String> list =new ArrayList<>();
        //添加元素
        list.add("aaa");
        list.add("ddd");
        list.add("ccc");

        //1.迭代器
//        Iterator<String> it=list.iterator();
//        while(it.hasNext()){
//            String s=it.next();
//            System.out.println(s);
//        }

        //增强for
//        for (String s:list){
//            System.out.println(s);
//        }

        //lambda表达式
        //list.forEach(s -> System.out.println(s));

        //普通for循环
       //...

       // listIterator<String> lt=list.listIterator();


    }
}
