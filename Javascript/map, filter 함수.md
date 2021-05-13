## map, filter 함수

#### 공통점

기존 배열을 건드리지 않으면서 요소들을 순회한 후 새로운 배열을 반환한다.

객체타입 컨트롤 가능하다.



### map

콜백함수가 적용된 새 요소를 반환

map function은 function이 준 값으로 이루어진 배열을 return한다.

```javascript
array.map(callbackFunction(currenValue, index, array), thisArg)
```

- currentValue : 배열 내 현재 값
- index : 배열 내 현재 값의 인덱스
- array : 현재 배열
- thisArg : callbackFunction 내에서 this로 사용될 값



```javascript
const days = ["Mon", "Tue", "Wed", "Thus", "Fri"];

const smilmingDays = days.map(day => console.log(day));
```

console.log(day)를 return하게 되어 smilmingDays에 들어가게 됩니다



numbers의 제곱값으로 새로운 배열 만들기

```javascript
// 1
let numbers = [ 1,2,3,4,5,6,7,8,9];
let newNumbers = numbers.map(number =>number *2);
console.log(newNumbers);
```

```javascript
// 2
let numbers = [ 1,2,3,4,5,6,7,8,9];
let newNumbers = numbers.map(function(number){
  return number*2; 
});
console.log(newNumbers);
```

```javascript
//3
let numbers = [ 1,2,3,4,5,6,7,8,9];

function multiplyTwo(number){
    return number *2;
}
let newNumbers = numbers.map(multiplyTwo);
console.log(newNumbers);
```

```javascript
//결과
[2, 4, 6, 8, 10, 12, 14, 16, 18]
```



### filter

조건을 만족한 요소를 반환

```javascript
let newArray = arr.filter(callbackFunction(element, index, array), thisArg);
```



numbers에서 3이상의 값으로 새로운 배열 만들기

```javascript
//1
let numbers = [ 1,2,3,4,5,6,7,8,9];
let resultNumbers = numbers.filter(number => number >= 3);
console.log(resultNumbers);
```

```javascript
//2
let numbers = [ 1,2,3,4,5,6,7,8,9];
let newNumbers = numbers.filter(function(number){
  return number>=3; 
});
console.log(newNumbers);
```

```javascript
//3
let numbers = [ 1,2,3,4,5,6,7,8,9];

function three(number){
    return number >= 3;
}
let resultNumbers = numbers.filter(three);
console.log(resultNumbers);
```

```javascript
//결과
[3, 4, 5, 6, 7, 8, 9]
```

