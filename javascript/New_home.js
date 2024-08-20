

const laptop=document.querySelector('.minor-link1');
const phone=document.querySelector('.minor-link2');
const shoe=document.querySelector('.minor-link3');

const laptoppage=document.querySelector('#minor-page-1');
const phonePage=document.querySelector('#minor-page-2');
const shoespage=document.querySelector('#minor-page-3');

if(laptoppage.style.display='none'){
    laptop.addEventListener('click',()=>{
        laptoppage.style.display='flex';
        phonePage.style.display='none';
        shoespage.style.display='none';
    })
} else{
    laptoppage.style.display='none'
}
// phones
if(phonePage.style.display='none'){
    phone.addEventListener('click',()=>{
        phonePage.style.display='flex';
        laptoppage.style.display='none';
        shoespage.style.display='none';
    })
} else{
    phonePage.style.display='none'
}
// shoes
if(shoespage.style.display='none'){
    shoe.addEventListener('click',()=>{
        shoespage.style.display='flex';
        phonePage.style.display='none';
        laptoppage.style.display='none';
    })
} else{
    shoe.style.display='none'
}


const modeToggle = document.getElementById('mode-toggle');

modeToggle.addEventListener('click', () => {
  const currentMode = document.body.classList.contains('dark-mode');
  if (currentMode) {
    document.body.classList.remove('dark-mode');
    document.body.classList.add('light-mode');
  } else {
    document.body.classList.remove('light-mode');
    document.body.classList.add('dark-mode');
  }
});

