const wrapper = document.querySelector(".wrapper");
const question = document.querySelector(".question");
const yesBtn = document.querySelector(".yes-btn");
const noBtn = document.querySelector(".no-btn");
const wrapperRect = wrapper.getBoundingClientRect();
const noBtnRect = noBtn.getBoundingClientRect();
yesBtn.addEventListener("click", () => {
  question.innerHTML = "Love You Too Sir :) <br>From CSE Core 1st Semester";
});
noBtn.addEventListener("mouseover", () => {
  const i =
    Math.floor(Math.random() * (wrapperRect.width - noBtnRect.width)) + 1;
  const j =
    Math.floor(Math.random() * (wrapperRect.height - noBtnRect.height)) + 1;
  noBtn.style.left = i + "px";
  noBtn.style.top = j + "px";
});

// const changeText = document.querySelector("#change-text");

// changeText.addEventListener("click", function() {
//   changeText.textContent = "Love you too:)";
// });

function afterr() {
  document.getElementById("Myimage").src = "teacher.jpg";
  document.getElementById("change-text").innerHTML = "Love you too Sir:)";
}

const btn = document.getElementById("btn");

btn.addEventListener("click", () => {
  // 👇️ hide button
  btnx.style.visibility = "hidden";
});

