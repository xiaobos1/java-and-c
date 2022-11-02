package com.pojo;

public class Students {
    private int id;
    private String name;
    private String alss;


    public Students() {
    }

    public Students(int id, String name, String alss) {
        this.id = id;
        this.name = name;
        this.alss = alss;
    }

    /**
     * 获取
     * @return id
     */
    public int getId() {
        return id;
    }

    /**
     * 设置
     * @param id
     */
    public void setId(int id) {
        this.id = id;
    }

    /**
     * 获取
     * @return name
     */
    public String getName() {
        return name;
    }

    /**
     * 设置
     * @param name
     */
    public void setName(String name) {
        this.name = name;
    }

    /**
     * 获取
     * @return alss
     */
    public String getAlss() {
        return alss;
    }

    /**
     * 设置
     * @param alss
     */
    public void setAlss(String alss) {
        this.alss = alss;
    }

    public String toString() {
        return "Students{id = " + id + ", name = " + name + ", alss = " + alss + "}";
    }
}
