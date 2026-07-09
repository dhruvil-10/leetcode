/**
 * @param {number} millis
 * @return {Promise}
 */
async function sleep(millis) {
    
    const answer =new  Promise((resolve,reject) => {
        setTimeout(resolve,millis);
    });

        return answer;

    
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */