package com.xiaoboMap;

import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;

public class MapDem02 {
    public static void main(String[] args) {
        //创建map集合
        Map<String ,String> map=new HashMap<>();
        //添加值
        map.put("神威万里","马超");
        map.put("御龙高手","尹志平");
        map.put("火棍勇者","嘿嘿");

        Set<Map.Entry<String ,String>> entries=map.entrySet();

        Iterator it=entries.iterator();

    }
}