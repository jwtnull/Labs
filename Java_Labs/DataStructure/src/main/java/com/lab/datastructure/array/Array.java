package com.lab.datastructure.array;

/**
 * 数据结构：数组
 *
 * @author 冰美式
 * @version 1.0
 * @date 2024-04-30 09:53
 */
public class Array {

    /**
     * 容量
     */
    private int capacity;
    /**
     * 有效个数
     */
    private int count;
    private int[] value;

    public Array(int capacity) {
        this.capacity = capacity;
        this.count = 0;
        this.value = new int[capacity];
    }

    /**
     * 初始化数组
     *
     * @param capacity 数组容量
     * @return
     */
    public static Array init(int capacity) {
        return new Array(capacity);
    }


    /**
     * 判断数组是否为空
     *
     * @return true:为空 false:不为空
     */
    public boolean isEmpty() {
        return this.count == 0;
    }

    /**
     * 判断数组是否已满
     *
     * @return true:已满 false:未满
     */
    public boolean isFull() {
        return this.count == this.capacity;
    }

    /**
     * 添加数据
     *
     * @param v
     * @return
     */
    public boolean add(int v) {
        if (isFull()) {
            System.out.println("添加失败，数组已经满");
            return false;
        }
        this.value[count++] = v;
        return true;

    }

    /**
     * 打印数组
     */
    public void show() {
        if (isEmpty()) {
            System.out.println("打印失败，数组为空！");
            return;
        }
        for (int i = 0; i < count; i++) {
            System.out.println(value[i]);
        }
    }

    /**
     * 清空数组
     * @return
     */
    public void clean(){
        this.value=null;
        this.count=0;
        this.capacity=0;

    }


}
