
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
