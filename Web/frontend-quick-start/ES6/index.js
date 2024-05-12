//let const
//跨域
// {
//     var a=1;
//     let b=2
// } 
// console.log(a);
// console.log(b); // ReferenceError: b is not defined

//重复声明
// var m=1;
// var m=2;
// let n=3
// let n=3;
// console.log(m) // 2
// console.log(n) // Identifier 'n' has already been declared




// var 会变量提升
// let 不存在变量提升
// console.log(x); // undefined
// var x = 10;
// console.log(y); //ReferenceError: y is not defined
// let y = 20;


//const
// 1. 声明之后不允许改变
// 2. 一但声明必须初始化，否则会报错
// const a = 1;
// a = 3; //Uncaught TypeError: Assignment to constant variable.


//解构
//数组解构
let array =[1,2,3];
//before
console.log(array[0]);
//after es6
const[x,y,z]=array;
console.log(x,y,z);

//对象解构
const person ={
    name:"张三",
    age:20,
    language: ['java', 'js', 'css']
};
//before
const name=person.name;
const age=person.age;
const language=person.language;
// 可以分别打印
console.log(name);
console.log(age);
console.log(language);

//es6 after
const{name2,age2,language2}=person;
console.log(name2);
console.log(age2);
console.log(language2);

//链判断
let message =null;
//before
//错误写法
// const firstName1 =message.body.user.firstName ||'default';
//正确写法
const firstName2=(message&&message.body&&message.body.user&&message.body.user.firstName) || 'default';

//es6 after
const firstName3=message?.body?.user?.firstName||'default';

//参数默认值
//在 ES6 以前，我们无法给一个函数参数设置默认值，只能采用变通写法：
function add(a, b) {
    // 判断 b 是否为空，为空就给默认值 1
    b = b || 1;
    return a + b;
  }
  // 传一个参数
console.log(add(10));


//现在可以这么写：直接给参数写上默认值，没传就会自动使用默认值
function add2(a, b = 1) {
    return a + b;
  }
  
  // 传一个参数
  console.log(add2(10));


//   箭头函数
//以前声明一个方法
// var print = function (obj) {
// console.log(obj);
// }

// 可以简写为：
let print = obj => console.log(obj);
// 测试调用
print(100);

// 两个参数的情况：
let sum = function (a, b) {
    return a + b;
}

let sum2=(a,b)=>a+b;
//测试调用
console.log(sum2(10, 10));//20
// 代码不止一行，可以用`{}`括起来
let sum3 = (a, b) => {
    c = a + b;
    return c;
};
//测试调用
console.log(sum3(10, 20));//30


// 模板字符串
let info ="你好，我的名字是：【"+name+"】，年龄是：【"+age+"】，邮箱是：【】";
console.log(info);

//Promise

//fetch
const fetchPromise = fetch(
    "https://mdn.github.io/learning-area/javascript/apis/fetching-data/can-store/products.json"
  );
console.log(fetchPromise);

fetchPromise.then((response)=>{
    console.log(`已经收到相应：${response.status}`);

    const jsonPromise=response.json();
    jsonPromise.then((json)=>{
        console.log(json);
    });
   
});
console.log("已经发送请求");


let get =function(){
    return  new Promise((resolve,reject)=>{
        //执行异步操作
        $.ajax({
            url:url,
            type:"GET",
            data:data,
            success(result){
                resolve(result);
            },
            error(error){
                reject(error);
            }
        });
    });
}

async function fetchProducts() {
    try {
      // 在这一行之后，我们的函数将等待 `fetch()` 调用完成
      // 调用 `fetch()` 将返回一个“响应”或抛出一个错误
      const response = await fetch(
        "https://mdn.github.io/learning-area/javascript/apis/fetching-data/can-store/products.json",
      );
      if (!response.ok) {
        throw new Error(`HTTP 请求错误：${response.status}`);
      }
      // 在这一行之后，我们的函数将等待 `response.json()` 的调用完成
      // `response.json()` 调用将返回 JSON 对象或抛出一个错误
      const json = await response.json();
      console.log(json[0].name);
    } catch (error) {
      console.error(`无法获取产品列表：${error}`);
    }
  }
  
  fetchProducts();