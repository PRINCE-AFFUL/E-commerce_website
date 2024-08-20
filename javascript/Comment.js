const taskList = document.getElementById('task-list');
const newTaskInput = document.getElementById('new-task');
const addTaskButton = document.getElementById('add-task');

addTaskButton.addEventListener('click', addTask);

function addTask() {
    const newTask = newTaskInput.value.trim();
    if (newTask) {
        const taskElement = document.createElement('li');
        taskElement.className = 'task';
        taskElement.textContent = newTask;
        taskElement.innerHTML += '<span class="delete-button">X</span>';
        taskList.appendChild(taskElement);
        newTaskInput.value = '';
        taskElement.querySelector('.delete-button').addEventListener('click', deleteTask);
        taskElement.addEventListener('click', toggleComplete);
    }
}

function deleteTask(event) {
    const taskElement = event.target.parentNode;
    taskList.removeChild(taskElement);
}

function toggleComplete(event) {
    const taskElement = event.target;
    taskElement.classList.toggle('completed');
}





