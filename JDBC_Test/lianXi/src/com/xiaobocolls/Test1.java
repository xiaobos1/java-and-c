package com.xiaobocolls;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Random;

public class Test1 {
    public static void main(String[] args) {
        /*
        随机点名器
         */
        //新建集合
        ArrayList<String> list=new ArrayList<>();
        //添加班级学生姓名
        Collections.addAll(list,"范闲","范建","范统","杜紫藤","杜齐燕","宋河帆","侯龙腾","朱毅群","蔡徐坤","袁明园","汤加三勺");
        //随机点名
//        Random r=new Random();
//        int index=r.nextInt(list.size());
//        String s = list.get(index);
//        System.out.println(s);

        //随机点名第二种方法
        Collections.shuffle(list);//打乱
        String s1 = list.get(0);
        System.out.println(s1);
    }
}
