/**
 * @param {number[][]} grid
 * @return {number[]}
 */
var findMissingAndRepeatedValues = function(grid) {
    const ans = [];
    let a = 0,b=0;
    let expectedSum = 0;
    let actualSum = 0;
    const n = grid.length;
    const s = new Set();
    for(let i=0;i<n;i++){
        for(let j=0;j<n;j++){
            actualSum += grid[i][j];
            if(s.has(grid[i][j])){
                a = grid[i][j];
                ans.push(a);
            }else{
                s.add(grid[i][j]);
            }
        }
    }

    expectedSum = (n*n)*(n*n +1)/2;
    b = expectedSum+a-actualSum;
    ans.push(b);
    return ans;
};
