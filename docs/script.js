function showPattern() {
  const shape = document.getElementById("shapeSelect").value;
  const size = parseInt(document.getElementById("sizeInput").value);
  const animationDiv = document.getElementById("patternAnimation");
  const codeDiv = document.getElementById("codeDisplay");

  animationDiv.innerHTML = "";
  codeDiv.textContent = "";

  if (!shape) {
    animationDiv.textContent = "Please select a shape.";
    return;
  }
  if (!size || size <= 0) {
    animationDiv.textContent = "Please enter a valid size.";
    return;
  }

  let pattern = "";
  let code = "";

  switch (shape) {
    case "horizontalLine":
      pattern = "* ".repeat(size).trim();
      code = `// Horizontal Line\nfor (int i = 0; i < ${size}; i++) {\n    cout << "* ";\n}`;
      break;

    case "verticalLine":
      pattern = Array(size).fill("*").join("\n");
      code = `// Vertical Line\nfor (int i = 0; i < ${size}; i++) {\n    cout << "*\\n";\n}`;
      break;

    case "square":
      for (let i = 0; i < size; i++) {
        pattern += "* ".repeat(size).trim() + "\n";
      }
      code = `// Square\nfor (int i = 0; i < ${size}; i++) {\n    for (int j = 0; j < ${size}; j++) {\n        cout << "* ";\n    }\n    cout << "\\n";\n}`;
      break;

    case "rhombus":
      for (let i = 0; i < size; i++) {
        pattern += " ".repeat(size - i - 1) + "* ".repeat(size).trim() + "\n";
      }
      code = `// Rhombus\nfor (int i = 0; i < ${size}; i++) {\n    for (int s = 0; s < ${size} - i - 1; s++) cout << " ";\n    for (int j = 0; j < ${size}; j++) cout << "* ";\n    cout << "\\n";\n}`;
      break;

    case "parallelogram":
      for (let i = 0; i < size; i++) {
        pattern += " ".repeat(size - i - 1) + "* ".repeat(size).trim() + "\n";
      }
      code = `// Parallelogram\nfor (int i = 0; i < ${size}; i++) {\n    for (int s = 0; s < ${size} - i - 1; s++) cout << " ";\n    for (int j = 0; j < ${size}; j++) cout << "* ";\n    cout << "\\n";\n}`;
      break;

    case "cross":
      for (let i = 0; i < size; i++) {
        let line = "";
        for (let j = 0; j < size; j++) {
          line += (j === i || j === size - 1 - i) ? "*" : " ";
        }
        pattern += line + "\n";
      }
      code = `// Cross\nfor (int i = 0; i < ${size}; i++) {\n    for (int j = 0; j < ${size}; j++) {\n        if (j == i || j == ${size} - 1 - i) cout << "*";\n        else cout << " ";\n    }\n    cout << "\\n";\n}`;
      break;

    case "plus":
      let mid = Math.floor(size / 2);
      for (let i = 0; i < size; i++) {
        let line = "";
        for (let j = 0; j < size; j++) {
          line += (i === mid || j === mid) ? "*" : " ";
        }
        pattern += line + "\n";
      }
      code = `// Plus\nfor (int i = 0; i < ${size}; i++) {\n    for (int j = 0; j < ${size}; j++) {\n        if (i == ${mid} || j == ${mid}) cout << "*";\n        else cout << " ";\n    }\n    cout << "\\n";\n}`;
      break;
  }

  // Animate
  let index = 0;
  let currentLine = "";

  function animate() {
    if (index < pattern.length) {
      const char = pattern[index];
      if (char === "\n") {
        const lineElem = document.createElement("div");
        lineElem.textContent = currentLine;
        animationDiv.appendChild(lineElem);
        currentLine = "";
      } else {
        currentLine += char;
      }
      index++;
      setTimeout(animate, 15);
    } else if (currentLine.length > 0) {
      const lineElem = document.createElement("div");
      lineElem.textContent = currentLine;
      animationDiv.appendChild(lineElem);
    }
  }

  animate();
  codeDiv.textContent = code;
}
