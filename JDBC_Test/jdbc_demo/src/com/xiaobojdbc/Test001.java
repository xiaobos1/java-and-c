package com.xiaobojdbc;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;

public class Test001 {
    public static void main(String[] args) {
        //迭代器 Colletion
        //Iterator<String> it=list.iterator();
        //创建集合并添加元素
        Collection<String> list=new ArrayList<>();
        list.add("aaa");
        list.add("bbb");
        list.add("ccc");
        list.add("ddd");

        //获取迭代器
        //迭代器好比一个箭头指向第一个元素
        Iterator<String> it=list.iterator();
        //利用循环不断去获取集合中的每一个元素
        while(it.hasNext()){
            //next 获取元素并移动指针
            String str=it.next();
            System.out.println(str);
        }

        //当上面的循环结束迭代器在没有元素的位置
        //System.out.println(it.next());
        System.out.println(it.hasNext());

        int[] arr={1,2,3,4,5,6,7,8,9};
        for(int s: arr){
            System.out.println(s);
        }
    }
}
