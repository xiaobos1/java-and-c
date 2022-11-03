package com.xiaobocolls;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Random;

public class Test2 {
    public static void main(String[] args) {
        /*
            班级里有N个学生
            抽到男生的概率为 70%
            抽到女生的概率为 30%
         */

        //新建集合
        ArrayList<Integer> list=new ArrayList<>();
        //添加数据
        Collections.addAll(list,1,1,1,1,1,1,1);
        Collections.addAll(list,0,0,0);

        //打乱集合中的数据
        Random r=new Random();
        int index = r.nextInt(list.size());
        //获取随机元素
        int number=list.get(index);
        System.out.println(number);

        //新建俩个集合来存储男生和女生
        ArrayList<String> boy=new ArrayList<>();
        ArrayList<String> girl=new ArrayList<>();

        Collections.addAll(boy,"范闲","范建","范统","朱毅群","蔡徐坤","袁明园","汤加三勺");
        Collections.addAll(girl,"杜紫藤","杜齐燕","田密秘");



            if (number == 1) {
                Collections.shuffle(boy);
                String boys = boy.get(0);
                System.out.println(boys);
            } else {
                int girlIndex = r.nextInt(girl.size());
                String girls = girl.get(girlIndex);
                System.out.println(girls);
            }

    }
}
