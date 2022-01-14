ALTER SESSION SET current_schema = dt2112a7;

/* Inserts already completed in groupwork */

/* PART 3 */
SELECT STUDENT_NUM, STUDENT_NAME
FROM STUDENT
WHERE STUDENT_YEAR = &Enter_Year;

/* PART 4*/

/* PART A */

DESCRIBE student;

SELECT
    'THE STUDENT '
    || student_name
    || ' HAS A STUDENT NUMBER OF '
    || student_num
FROM
    student;

SELECT
    student_name
    || ' HAS A '
    || room_type
    || ' ROOM'
FROM
    student;

SELECT
    student_num
    || ' is the student '
    || student_name
    || ' and is in year '
    || student_year
FROM
    student
ORDER BY
    student_year;

/* PART B */

SELECT
    'The postgrad student '
    || student_name
    || 'has a '
    || room_type
    || 'room'
FROM
    student
WHERE
    student_type = 'postgrad';

SELECT
    'The undergrad student '
    || student_name
    || 'has a '
    || room_type
    || 'room'
FROM
    student
WHERE
    student_type = 'undergrad';

    
/* PART C */

SELECT
    *
FROM
    student
WHERE
    eligible IS NULL;

SELECT
    *
FROM
    student
WHERE
    eligible IS NOT NULL;

/* PART D */

SELECT
    'The average student is in year ' || AVG(student_year)
FROM
    student;

SELECT DISTINCT
    student_course,
    COUNT(student_course)
FROM
    student
GROUP BY
    student_course;

SELECT
    COUNT(student_num),
    student_course
FROM
    student
GROUP BY
    student_course
HAVING
    COUNT(student_num) < 3;

/* PART E */

SELECT
    student_num
FROM
    orders
UNION
SELECT
    student_num
FROM
    student
ORDER BY
    student_num;

SELECT
    student_num
FROM
    student
MINUS
SELECT
    student_num
FROM
    orders;

SELECT
    student_num
FROM
    student
WHERE
    cerfew = '7AM->11PM'
INTERSECT
SELECT
    student_num
FROM
    orders;

/* PART F */

SELECT
    student_num,
    student_name,
    order_cost
FROM
    student
    JOIN orders USING ( student_num );

SELECT
    student.student_num,
    orders.room_num,
    orders.order_cost
FROM
    student
    INNER JOIN orders ON student.student_num = orders.student_num;

SELECT
    student.student_num,
    orders.room_num,
    orders.order_cost
FROM
    student
    INNER JOIN orders ON student.student_num = orders.student_num
WHERE
    order_cost <= 6;

/* PART G */

SELECT
    student.student_num,
    orders.room_num,
    orders.order_description
FROM
    student
    FULL OUTER JOIN orders ON student.student_num = orders.student_num
ORDER BY
    student.student_num;

SELECT
    student.student_num,
    orders.room_num,
    orders.order_cost
FROM
    student
    LEFT OUTER JOIN orders ON student.student_num = orders.student_num
ORDER BY
    student.student_num;

SELECT
    student.student_num,
    orders.room_num,
    orders.order_date
FROM
    student
    RIGHT OUTER JOIN orders ON student.student_num = orders.student_num
ORDER BY
    student.student_num;

/* PART H */

SELECT
    student_num,
    student_name,
    room_type
FROM
    student
WHERE
    student_num IN (
        SELECT
            student_num
        FROM
            orders
        WHERE
            order_limit > 15
    );

SELECT
    student_num,
    room_num,
    order_description
FROM
    orders
WHERE
    student_num IN (
        SELECT
            student_num
        FROM
            student
        WHERE
            cerfew = '7AM->11PM '
    );