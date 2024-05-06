package com.lab.datastructure.array;

import org.junit.After;
import org.junit.Before;
import org.junit.Test;

/**
 * @author zcc
 * @version 1.0
 * @date 2024-04-30 10:04
 */
public class ArrayTest {
    private Array array;

    @Test
    public void testAdd() {
        array.add(1);
        array.add(2);
        array.show();
    }


    @Before
    @Test
    public void testInit() {
        array = new Array(10);
    }

    @After
    public void testClean() {
        array.clean();

    }
}
