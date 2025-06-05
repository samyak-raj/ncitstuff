const p = document.getElementById("a");
p.style.color = "red";
p.innerHTML = new Date();

let btn = document.querySelector("button");
btn.addEventListener('click', clickHandler);

function clickHandler() {
    if (p.style.display == "block") {
        p.style.display = "none";
    } else {
        p.style.display = "block";
    }
}