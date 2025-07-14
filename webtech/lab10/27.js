const str = "hello world, hello again";

// exec()
const execResult = /hello/.exec(str);
console.log("exec():", execResult);

// test()
const testResult = /world/.test(str);
console.log("test():", testResult);

// match()
const matchResult = str.match(/hello/g);
console.log("match():", matchResult);

// search()
const searchResult = str.search(/world/);
console.log("search():", searchResult);

// replace()
const replaceResult = str.replace(/world/, "JavaScript");
console.log("replace():", replaceResult);