const countvowel=(str)=>{  
//function countvowel(str){
    let count=0;
    for(const char of str)
    {                       
        if(char==="a"||char==="e"||char==="i"||char==="o"||char==="u"){
            count++;
        }
          
    }
    return count ;   
}
//}

let arr=["c","yu","tr","uy","oi"];
arr.forEach(function printval(val) {
   console.log(val.toLowerCase()); 
});


//square of an no..
let array=[2,4,5,4,6,];
array.forEach((array)=>{
    console.log("value=",array*array);
});

let num=[34,55,45,64];

let newnum=num.map((val)=>{
    return val;

}  );
console.log(newnum);
let calSquare=(num)=>{
    console.log(num*num);
};

//filter

let air=[2,5,4,7,8,6,];
let even=air.filter((val)=>{
    return val%2===0;
});
console.log(even);

//reduce

let ary=[2,3,5,7,8];
let output=ary.reduce((res,curr)=>{
    return res>curr? res:curr;
});
console.log(output);

//practice

let ar=[87,98,45,99,87,90];
let result=ar.filter((val)=>{
    return val>90;
});
console.log(result);

let n=prompt("enter the no.=");
let r=[];
for(let i=1;i<=n;i++){
r[i-1]=i;

}
console.log(r);


