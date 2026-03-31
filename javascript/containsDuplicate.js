class solution{    
    hasDuplicate(nums){
        const seen = new Set();
        for(const num of nums){
            if (seen.has(num)){
                console.log("true")
                return true;
            }
            seen.add(num);
        }
        console.log("false");
        return false;
    }    
}

const sol = new solution();
let nums = [1,2,3,4];

sol.hasDuplicate(nums);