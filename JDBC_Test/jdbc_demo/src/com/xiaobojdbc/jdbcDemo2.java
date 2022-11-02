package com.xiaobojdbc;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
import static java.sql.DriverManager.getConnection;
/*
    ResultSet 练习
 */
public class jdbcDemo2 {
    public static void main(String[] args) throws Exception {
        Class.forName("com.mysql.cj.jdbc.Driver");


        String usl="jdbc:mysql:///gouwa";
        String username="root";
        String password="root";
        Connection conn= getConnection(usl,username,password);

        //获取Statement对象
        Statement stat=conn.createStatement();

        String sql="select* from students";

        //执行sql
        ResultSet rs = stat.executeQuery(sql);

        while(rs.next()){
            int id=rs.getInt(1);
            String name=rs.getString(2);
            String alss=rs.getString(3);

            System.out.println(id);
            System.out.println(name);
            System.out.println(alss);

            System.out.println("-------------------------------");
        }

    }
}
