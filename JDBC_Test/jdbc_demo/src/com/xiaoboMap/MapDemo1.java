package com.xiaoboMap;

import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;

public class MapDemo1 {
    public static void main(String[] args) {
        //创建Map对象
        Map<String,String> map=new HashMap<>();
        //添加元素
        map.put("小龙女","尹志平");
        map.put("郭靖","穆念慈");
        map.put("黄蓉","欧阳克");

        //放入单链集合
        Set<String> keys=map.keySet();
        //遍历方法
//        for(String s: keys){5
//            String val=map.get(s);
//            System.out.println(s+"="+val);
//        }
        //迭代器遍历
        Iterator<String> it=keys.iterator();
        while(it.hasNext()){
            String str=it.next();
            //用键去获取值
            String val=map.get(str);

            System.out.println(str+"="+val);
        }

    }
}
