<script setup>
let name="张三";
let consentCheck=false;
let interest=['足球','篮球'];
let sex='男';
</script>

<template>
  <div style="display: flex;">
    <div style="border: 1px solid black;width: 300px">
      <form>
        <h1>表单绑定</h1>
        <p style="background-color: azure"><label>姓名(文本框)：</label><input v-model="name"/></p>
        <p style="background-color: azure"><label>同意协议(checkbox)：</label>
          <input type="checkbox" v-model="consentCheck"/>
        </p>
        <p style="background-color: azure">
          <label>兴趣(多选框)：</label><br/>
          <label><input type="checkbox" value="足球" v-model="interest"/>足球</label>
          <label><input type="checkbox" value="篮球" v-model="interest" />篮球</label>
          <label><input type="checkbox" value="羽毛球" v-model="interest" />羽毛球</label>
          <label><input type="checkbox" value="乒乓球" v-model="interest" />乒乓球</label>
        </p>
        <p style="background-color: azure">
          <label>性别(单选框)：</label>
          <label><input type="radio" name="sex" value="男" v-model="sex">男</label>
          <label><input type="radio" name="sex" value="女" v-model="sex">女</label>
        </p>
        <p style="background-color: azure">
          <label>学历(单选下拉列表)：</label>
          <select>
            <option disabled value="">选择学历</option>
            <option>小学</option>
            <option>初中</option>
            <option>高中</option>
            <option>大学</option>
          </select>
        </p>
        <p style="background-color: azure">
          <label>课程(多选下拉列表)：</label>
          <br/>
          <select multiple>
            <option disabled value="">选择课程</option>
            <option>语文</option>
            <option>数学</option>
            <option>英语</option>
            <option>道法</option>
          </select>
        </p>
      </form>
    </div>
    <div style="border: 1px solid blue;width: 200px">
      <h1>结果预览</h1>
      <p style="background-color: azure"><label>姓名：</label></p>
      <p style="background-color: azure"><label>同意协议：</label>
      </p>
      <p style="background-color: azure">
        <label>兴趣：</label>
      </p>
      <p style="background-color: azure">
        <label>性别：</label>
      </p>
      <p style="background-color: azure">
        <label>学历：</label>
      </p>
      <p style="background-color: azure">
        <label>课程：</label>
      </p>
    </div>
  </div>
</template>

<style scoped>

</style>