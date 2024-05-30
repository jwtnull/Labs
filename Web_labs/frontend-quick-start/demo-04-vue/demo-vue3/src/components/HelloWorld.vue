<script setup>
import {computed, reactive, ref} from "vue";

let name ="张三";
let age=20;
const count= ref(0);
const obj =ref(
    {
      netsted:{count:0},
      arr:['foo','bar']
    }
);

const totalPrice =computed(()=>{
  return car.price * car.num - car.coupon*100
});

const state =reactive({count:0});

let car=reactive({
  brand:"奔驰",
  price:100,
  coupon:0,
  num:0
});

function buy(){
  alert("购买成功");
}

function increment(){
  count.value++;
}
function mutateDeeply(){
  obj.value.netsted.count++;
  obj.value.arr.push('baz');
}

function  addNum(){
  car.num++;

}
function changePrice(){
  car.price++;

}
function getCoupon(){

}
</script>

<template>
  <p> name: {{name}} </p>
  <p> age: {{age}} </p>
  <div style="border: 3px solid red">
    <p>品牌：{{car.brand}}</p>
    <p>价格：{{car.price}}</p>
  </div>
  <button v-on:click="buy">购买</button>
  <button @click="buy">购买</button>
  <button @click="increment"> {{ count }}</button>
  <button @click="mutateDeeply"> {{ obj.netsted.count }}</button>
  <button @click="state.count++">
    {{ state.count }}
  </button>


  <div class="car">
    <h2>优惠券：{{ car.coupon }} 张</h2>
    <h2>数量：{{ car.brand }}</h2>
    <h2>单价：{{ car.price }}</h2>
    <h1>总价：{{totalPrice}}</h1>
    <button @click="getCoupon">获取优惠</button>
    <button @click="addNum">加量</button>
    <button @click="changePrice">加价</button>
  </div>
  
</template>

<style scoped>

</style>
