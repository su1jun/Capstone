// Set new default font family and font color to mimic Bootstrap's default styling
Chart.defaults.global.defaultFontFamily = 'Nunito', '-apple-system,system-ui,BlinkMacSystemFont,"Segoe UI",Roboto,"Helvetica Neue",Arial,sans-serif';
Chart.defaults.global.defaultFontColor = '#858796';

// Pie Chart Example
var ctx = document.getElementById("myPieChart");
var myPieChart = new Chart(ctx, {
  type: 'doughnut',
  data: {
    labels: ["01월", "02월", "03월", "04월", "05월", "06월", "07월", "08월", "09월", "10월", "11월", "12월"],
    datasets: [{
      label: "Distance",
      backgroundColor: ["#4e73df", "#1cc88a", "#F0768B", "#36b9cc", "#498D8E", "#858796", "#4e73df", "#1cc88a", "#36b9cc", "#f6c23e", "#e74a3b", "#858796"],
      HoverBackgroundColor: ["#4e73df", "#17a673", "#F0768B", "#2c9faf", "#498D8E", "#858796", "#2e59d", "#17a673", "#2c9faf", "#f6c23e", "#e74a3b", "#858796"],
      HoverBorderColor: "rgba(234, 236, 244, 1)",

      data: [124, 219, 382, 216, 287, 0, 0, 0, 0, 0, 0, 0],
    }],
  },
  // data: {
  //   labels: ["Direct", "Referral", "Social"],
  //   datasets: [{
  //     data: [55, 30, 15],
  //     backgroundColor: ['#4e73df', '#1cc88a', '#36b9cc'],
  //     hoverBackgroundColor: ['#2e59d9', '#17a673', '#2c9faf'],
  //     hoverBorderColor: "rgba(234, 236, 244, 1)",
  //   }],
  // },
  options: {
    maintainAspectRatio: false,
    tooltips: {
      backgroundColor: "rgb(255,255,255)",
      bodyFontColor: "#858796",
      borderColor: '#dddfeb',
      borderWidth: 1,
      xPadding: 15,
      yPadding: 15,
      displayColors: false,
      caretPadding: 10,
    },
    legend: {
      display: false
    },
    cutoutPercentage: 80,
  },
});
