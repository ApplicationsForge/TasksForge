# Todolist GUI project
[Ссылка на проект todolist к которому делаем интерфейс] (https://github.com/gammons/todolist)


## Участники:
* Допира Валерия;
* Лянгузов Александр.

### Список ролей:
* User - Пользователь, использующий приложение и весь его функционал.

### Основная задача:

* User - Управление списком задач для себя или другого пользователя.

### Сценарии использования:

	
Приложение для управления задачами по проекту внутри репозитория git.

Примерные сценарии использвания:
1. Инициализация репозитория с задачами внутри папки;
1. Добавление задачи для себя;
1. Добавление задачи для другого участника проекта;
1. Просмотр текущих задач для конкретного пользователя;
1. Просмотр текущих задач для всех пользователей;
1. Удаление задачи;
1. Редактирование поставленной задачи;
1. Архивирование выполненных задач.



## Анализ предметной области:
Todolist сам по себе является довольное необычной реализацией идеи списка дел. Его отличительными чертами являются:

* Консольное исполнение
* Кроссплатформенность
* Высокая скорость работы
* Хранение данных в формате *.json
* Пользовательское взаимодействие реализовано по типу работы с репозиторием git
* Основным языком является Go.

Основным приемуществом такой реализации является возможность хранения задач прямо в репозитории git. Что делает задачи по проекту его частью. Отпадает необходимость посещать множество различных web-сервисов (а это открытие браузера, печатанья доменного имени сайта и тд) или сторонних приложений. Чтобы получить актуальное состояние задач достаточно просто получить коммит и текщим состоянием репозиория git. Далее можно работать над актуальными задачами в режиме оффлайн и всегда видеть их перед собой.

Однако, при всей своей продуманности и грамотности исполнения, приложение имеет ряд недостатков.

1. Оно подходит не для всех. Пользоваться этим приложением будет удобно только человку, привыкшему к командной строке.
1. Некоторые вещи хочется видеть перед глазами постоянно, например, общий список задач. Сейчас же, чтобы его посмотреть приходится снова делать вызов команды просмотра списка задач.
1. Для определенных действий более естествена графическая интерпретация. Например, проблему представляет редактирование уже добавленой задачи.

Наша идея состоит в том, чтобы написать графический клиент для данного проекта на языке C++ (Qt) для поддержания высокой скорости работы. Подобное поведение реализовано в таких приложениях, как SourceTree или GithubDesktop.

## Тезаурус предметной области:

GUI - графический интерфейс.

Клиент - приложение с графическим интерфейсом, взаимодействующее с программой todolist.

ToDo List - приложение для 1 пользователя, предназначенное для добавления, удаления, просмотра, редактирования задач;

todolist - консольное приложение, на языке Go, реализующее идею ToDo List, и для которого будет написано приложение с GUI.

Task Manager - Приложения для совместного использования командой разработчиков. Позволяет делать все тоже самое, что и ToDo лист, но с закреплением к конкретному пользователю и зажанием сроков выполнения.

## Основные задачи проекта:

* Системные вызовы установленной программы todolist из клиента через класс QProcess и перенаправление вывода в приложение - клиент;
* Расширение функционала todolist до полноценного таск-менеджера, удобного в использовании командами разработчиков;
* Открытие терминала в папке с файлом;
* (?) Установка программы todolist при установке клиента;

## Архитектура проекта:

MVP.

 