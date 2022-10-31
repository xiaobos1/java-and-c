package com.listDemo;

import java.util.ArrayList;
import java.util.List;

public class Test {
    public static void main(String[] args) {
        //创建一个集合
        List<String> list=new ArrayList<>();

        //添加元素
        list.add("aaa");
        list.add("bbb");
        list.add("ccc");
        list.add("ddd");

        //在集合中插入指定位置  void add(int i,E element)
        //原索引后的元素全部后移
        list.add(1,"vcc");


        //删除指定索引出的元素  E remove(int index)
        //list.remove(2);
        list.remove("ddd");

        //修改指定索引处的元素 E set(int index,E element)
        list.set(3,"bbb");
        System.out.println(list);

        //获取指定的索引处的元素
        String s=list.get(1);
        System.out.println(s);
        //打印集合
        System.out.println(list);

    }
}
