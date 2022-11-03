package com.xiaobocollections;

import java.util.ArrayList;
import java.util.Collections;

public class CollectionsDemo {
    public static void main(String[] args) {
        //创建集合
        ArrayList<String> list=new ArrayList<>();
        //添加元素
        Collections.addAll(list,"zxcv","abc","efg","hij","beautiful");
        Collections.sort(list);
        System.out.println(list);
        //Collections测试
        //1.拷贝集合
        ArrayList<String> list1=new ArrayList<>();
        list1.add("gouwa");
        Collections.copy(list,list1);
        System.out.println(list1);
        System.out.println(list);
    }
}
