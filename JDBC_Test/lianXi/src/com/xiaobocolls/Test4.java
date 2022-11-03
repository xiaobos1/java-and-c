package com.xiaobocolls;

import java.util.*;

public class Test4 {
    public static void main(String[] args) {
        Map<String,ArrayList<String>> map=new HashMap<>();

        //添加元素
        ArrayList<String> city1=new ArrayList<>();
        Collections.addAll(city1,"南京市","扬州市","苏州市","无锡市","常州市");
        ArrayList<String> city2=new ArrayList<>();
        Collections.addAll(city2,"武汉市","十堰市","宜昌市","鄂州市");
        ArrayList<String> city3=new ArrayList<>();
        Collections.addAll(city3,"石家庄市","唐山市","邢台市","保定市","张家口市");

        map.put("江苏省",city1);
        map.put("湖北省",city2);
        map.put("河北省",city3);


        System.out.println(map);

        System.out.println(city1);


        Set<Map.Entry<String,ArrayList<String>>> entries=map.entrySet();
        for (Map.Entry<String,ArrayList<String>> entry: entries){
            String key=entry.getKey();
            ArrayList<String> values=entry.getValue();
            StringJoiner sj=new StringJoiner(",","","");
            for(String city:values){
                sj.add(city);
            }
            System.out.println(key+"="+sj);
        }
    }
}
