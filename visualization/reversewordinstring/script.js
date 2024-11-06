document.getElementById('reverseButton').addEventListener('click', function() {
    let inputString = document.getElementById('inputString').value;
    let stepsList = document.getElementById('stepsList');
    let resultElement = document.getElementById('result');
    
    // Clear previous steps
    stepsList.innerHTML = '';
    
    let steps = [];
    let n = inputString.length;
    let s = inputString.split('');
    let idx = 0;
    
    // Step 1: Reverse the entire string
    steps.push(`Step 1: Reverse the entire string: ${s.join('')}`);
    s.reverse();
    steps.push(`After reverse: ${s.join('')}`);
    
    // Step 2: Start the main loop
    for (let i = 0; i < n; i++) {
        if (s[i] !== ' ') {
            if (idx !== 0) s[idx++] = ' ';
            let j = i;
            
            // Highlight word to be reversed
            while (j < n && s[j] !== ' ') j++;
            let wordToReverse = s.slice(i, j);
            steps.push(`Step 2: Reverse the word "${wordToReverse.join('')}"`);
            
            s.splice(i, j - i, ...wordToReverse.reverse());
            steps.push(`After reversing the word: ${s.join('')}`);
            
            // Copy the reversed word
            while (i < j) s[idx++] = s[i++];
        }
    }
    
    s.length = idx;  // Resize the string to the correct length
    steps.push(`Final result: ${s.join('')}`);
    
    // Display steps
    steps.forEach(step => {
        let li = document.createElement('li');
        li.textContent = step;
        stepsList.appendChild(li);
    });
    
    // Display result
    resultElement.textContent = s.join('');
});
