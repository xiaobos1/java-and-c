package com.xiaobojdbc;

import java.util.ArrayList;
import java.util.Collection;

public class Test002 {
    public static void main(String[] args) {
        Collection<String> list=new ArrayList<>();
        list.add("zhangsan");
        list.add("lisi");
        list.add("zhaoliu");

        //增强for遍历
        for(String s:list){
            System.out.println(s);
        }
    }
}
