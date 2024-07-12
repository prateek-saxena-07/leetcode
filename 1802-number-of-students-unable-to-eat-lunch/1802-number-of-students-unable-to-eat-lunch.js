/**
 * @param {number[]} students
 * @param {number[]} sandwiches
 * @return {number}
 */
var countStudents = function(students, sandwiches) {
    let n=students.length;
    let arr=[0,0];
    for(let stud of students)
        arr[stud]++;
    for(let i=0;i<n;i++)
    {
        let sand=sandwiches[i];
        if(arr[sand]===0)
            return n-i;
        arr[sand]--;
    }
    return 0;
};