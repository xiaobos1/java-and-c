package com.xiaobojdbc;

import com.pojo.Students;

import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;

import static java.sql.DriverManager.getConnection;

public class jdbcDemo3 {
    public static void main(String[] args) throws Exception {
        Class.forName("com.mysql.cj.jdbc.Driver");

        //创建连接
        String usl="jdbc:mysql:///gouwa";
        String username="root";
        String password="root";
        Connection conn= getConnection(usl,username,password);

        //建立mysql语句
        String sql="select * from students";

        //获取Statement对象
        Statement stat=conn.createStatement();

        //执行sql
        ResultSet rs = stat.executeQuery(sql);


        List<Students> list=new ArrayList<>();
        while(rs.next()){
            Students stu=new Students();

            int id=rs.getInt("id");
            String name=rs.getString("name");
            String alss=rs.getString("alss");

            stu.setId(id);
            stu.setName(name);
            stu.setAlss(alss);

            list.add(stu);
            System.out.println("-------------------------------");
        }

        System.out.println(list);
    }
}
